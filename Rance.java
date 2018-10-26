package threads;

public class Rance {
	static int balance = 100;
	static long numThreads;
	public static void main(String[] args) 
	{
		for(int i = 0; i < 4; i++)
		{
			new Thread(thread1).start();
			new Thread(thread2).start();
		}
		System.out.println("\n\n\n\n O seu saldo é de: "+balance+" reais");

	}	 
	private static void Balance(int op)
	{
		if(op == 1)
		{
			balance += 50;
		}
		else
		{
			balance -= 50;
		}
	}
	private static Runnable thread1 = new Runnable() 
	{
		public void run() 
	    {
			try
	        {
				//Thread currentThread = Thread.currentThread();           
				Balance(1);
				
	            System.out.println("Thread 1: Saldo atual: "+balance);	
	        } catch (Exception e){}
	    }
	};
	private static Runnable thread2 = new Runnable() 
	{
		public void run() 
	    {
			try
	        {
				
				//Thread currentThread = Thread.currentThread();
				Balance(2);
				
				System.out.println("Thread 2: Saldo atual: "+balance);
	        } catch (Exception e){}
	    }
	};
}
