/************************
 * 作       者：温育杜           *
 * 联系方式：15645071659 *
 * 时       间：2017/07/14  *
 *************************/

package Calculator;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Calculator {

	public static void main(String[] args) {
		//生成JFrame对象
		JFrame jf = new JFrame();
		
		//设置布局
		jf.setLayout(new BorderLayout());
		
		//生成两块面板
		JPanel northPanel=new JPanel();
		JPanel centerPanel=new JPanel();
		
		//设置面板布局
		northPanel.setLayout(new FlowLayout());
		centerPanel.setLayout(new GridLayout(4,4));
		
		//添加组件
		northPanel.add(new JTextField(25));
		String str = "123+456-789*0./=";
		for(int i=0;i<16;i++) {
			centerPanel.add(new JButton(str.substring(i, i+1)));
		}
		
		//将面板加入到JFrame中
		jf.add(northPanel,BorderLayout.NORTH);
		jf.add(centerPanel, BorderLayout.CENTER);
		
		//辅助窗口设置
		jf.setVisible(true);
		jf.setSize(400,300);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
