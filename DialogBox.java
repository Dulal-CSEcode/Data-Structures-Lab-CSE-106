import javax.swing.JOptionPane;


public class DialogBox {
   public static void main(String[] args) {
    //    String name = JOptionPane.showInputDialog("Enter Your name:");
    //    JOptionPane.showMessageDialog(null, "Hello " + name);
    //    int age = Integer.parseInt(JOptionPane.showInputDialog("Enter Your Age:"));
    //    JOptionPane.showMessageDialog(null, "You are " + age + " years old");
       
    //    double height = Double.parseDouble(JOptionPane.showInputDialog("Enter Your Height in cm:"));
    //    JOptionPane.showMessageDialog(null, "You are "+height+ " cm tall");
    String name = JOptionPane.showInputDialog("Enter Your name:");
    JOptionPane.showMessageDialog(null,"Hello!"+name);
        
   }
}
