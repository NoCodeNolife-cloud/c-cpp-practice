import java.io.IOException;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

/**
 * 项目名:  Socket half close
 * 开发者:  Administrator
 * 创建于:  2022 一月 29 星期六 16:53
 * 描述:
 */
public class Server {

	public static void main(String[] args) {

		try {

			ServerSocket ss = new ServerSocket(30000);
			Socket s = ss.accept();
			PrintStream ps=new PrintStream(s.getOutputStream());
			Scanner scan=new Scanner(s.getInputStream());
			ps.println("first line");
			ps.println("second line");
			s.shutdownOutput();
			System.out.println(s.isClosed());
			while(scan.hasNextLine()){
				System.out.println(scan.nextLine());
			}

			scan.close();
			s.close();
			ss.close();
		} catch (IOException e) {

			e.printStackTrace();
		}
	}
}
