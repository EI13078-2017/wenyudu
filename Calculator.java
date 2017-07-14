/************************
 * ��       �ߣ�������           *
 * ��ϵ��ʽ��15645071659 *
 * ʱ       �䣺2017/07/14  *
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
		//����JFrame����
		JFrame jf = new JFrame();
		
		//���ò���
		jf.setLayout(new BorderLayout());
		
		//�����������
		JPanel northPanel=new JPanel();
		JPanel centerPanel=new JPanel();
		
		//������岼��
		northPanel.setLayout(new FlowLayout());
		centerPanel.setLayout(new GridLayout(4,4));
		
		//������
		northPanel.add(new JTextField(25));
		String str = "123+456-789*0./=";
		for(int i=0;i<16;i++) {
			centerPanel.add(new JButton(str.substring(i, i+1)));
		}
		
		//�������뵽JFrame��
		jf.add(northPanel,BorderLayout.NORTH);
		jf.add(centerPanel, BorderLayout.CENTER);
		
		//������������
		jf.setVisible(true);
		jf.setSize(400,300);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
