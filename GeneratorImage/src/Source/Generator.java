package Source;
import java.awt.BorderLayout;
import java.awt.Canvas;
import java.awt.Color;
import java.awt.Component;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Rectangle;
import java.awt.Toolkit;
import java.awt.geom.AffineTransform;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.Random;

import javax.imageio.ImageIO;
import javax.swing.JFrame;


public class Generator extends JFrame {
	
	static final int WIDTH = 240;
	static final int HEIGHT = 160;
	
	
	static final int SIZE = 30;
	
	MyCanvas canvas = new MyCanvas();
	
	public static void main(String[] args) {
		Generator gn = new Generator();
		gn.setVisible(true);
	}
	
	public Generator(){
		super("Generator");
		setLayout(new BorderLayout());
		setSize(WIDTH, HEIGHT);	
		add("Center", canvas);	
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	
		setLocationRelativeTo(null);
		setVisible(true);
		captureComponent(canvas, 1);
	}
	
	private void captureComponent(Component component, int i) {
        Rectangle rect = component.getBounds();
		
		try {
	            String format = "jpg";
	            String fileName = component.getName() + i + "." + format;
	            BufferedImage captureImage = new BufferedImage(rect.width, rect.height, 
						     BufferedImage.TYPE_INT_ARGB);
	            component.paint(captureImage.getGraphics());
				
	            ImageIO.write(captureImage, format, new File(fileName));
				
	            System.out.printf("The screenshot of %s was saved!", component.getName());
		} catch (IOException ex) {
	            System.err.println(ex);
		}		
    }
	
	public class MyCanvas extends Canvas{
		
		@Override
		public void paint(Graphics g){
			super.paint(g);
			Graphics2D g2d = (Graphics2D) g;
			BufferedImage img;
			try {
				img = ImageIO.read(new File("/home/vinihcampos/Documentos/GeneratorImage/src/Source/bg.jpg"));
				g2d.drawImage(img, 0, 0, this);				
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}			
			generateClipTag(g, 1);
			generateClipTag(g, 2);
			generateClipTag(g, 3);
		}
		
		public void generateClipTag(Graphics g, int quadrante){
			Random rand = new Random();
			int x = 0;
			int y = 0;
			
			switch(quadrante){
				case 1:
					x = rand.nextInt(60);
					y = rand.nextInt(30);
					break;
				case 2:
					x = rand.nextInt(60);
					y = rand.nextInt(30) + 60;
					break;
				case 3:
					x = rand.nextInt(90) + 120;
					y = rand.nextInt(30);
					break;
				default:
					x = 0;
					y = 0;

			}
			
			System.out.print(x + "  " + y + "  ");
			
			BufferedImage img;
			Graphics2D g2d = (Graphics2D) g;
			try {
				int v = rand.nextInt(9) + 1;
				System.out.println(v);
				img = ImageIO.read(new File("/home/vinihcampos/Documentos/GeneratorImage/src/Source/CLIPTAG"+v+".jpg"));
				AffineTransform transform = new AffineTransform();  // identity transform
				transform.translate(x, y);
				transform.rotate(Math.toRadians( rand.nextInt(45)));
				g2d.drawImage(img, transform , this);
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
						
		}
		
		
	}
	
	
	
	
	
}
