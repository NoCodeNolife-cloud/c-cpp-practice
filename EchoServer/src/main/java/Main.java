import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

/**
 * 项目名:  EchoServer
 * 开发者:  Administrator
 * 创建于:  2022 一月 27 星期四 15:53
 * 描述:
 */
public class Main {

	public static void main(String[] args) throws IOException {

		try {

			int i = 1;
			ServerSocket s = new ServerSocket(8189);
			while (true) {

				Socket incoming = s.accept();
				System.out.println("Spawning " + i);
				Runnable r = new ThreadedEchoHandler(incoming);
				Thread t = new Thread(r);
				t.start();
				i++;
			}
		} catch (IOException e) {

			e.printStackTrace();
		}
	}
}

class ThreadedEchoHandler implements Runnable {

	private Socket incoming;

	public ThreadedEchoHandler(Socket t) {
		incoming = t;
	}

	public void run() {
		try (InputStream inStream = incoming.getInputStream();
		     OutputStream outStream = incoming.getOutputStream();
		     Scanner in = new Scanner(inStream);
		     PrintWriter out = new PrintWriter(outStream, true)) {

			out.println("Hello! Enter BYE to exit.");
			boolean done = false;
			while (!done && in.hasNextLine()) {

				String line = in.nextLine();
				out.println("Echo: " + line);
				if (line.trim().equals("BYE")) {

					done = true;
				}
			}
		} catch (IOException e) {

			e.printStackTrace();
		} finally {

			try {
				incoming.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
}