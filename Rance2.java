package threads;

import java.util.concurrent.Semaphore;

public class Rance2 {
	static int balance = 100;
	static long numThreads;
	static Semaphore semaphore = new Semaphore(1);
	public static void main(String[] args) 
	{
		for(int i = 0; i < 4; i++)
		{
			new Thread(thread0).start();
			new Thread(thread1).start();
		}
		System.out.println("\n\n\n\n O seu saldo é de: "+balance+" reais");
		
	}
	class Isd(int id)
	{
		this.id = id;
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
	private static Runnable thread0 = new Runnable() 
	{
		public void run() 
	    {
			try
	        {
		        semaphore.acquire();
				//Thread currentThread = Thread.currentThread();           
				Balance(1);
	            System.out.println("Thread 1: Saldo atual: "+balance);
	            semaphore.release();
	        }
			catch (Exception e)
			{
		       	
			}
			
	    }
	};
	private static Runnable thread1 = new Runnable() 
	{
		public void run() 
	    {
			try
	        {
				semaphore.acquire();
				//Thread currentThread = Thread.currentThread();
				Balance(2);
				
				System.out.println("Thread 2: Saldo atual: "+balance);
				semaphore.release();
	        } 
			catch (Exception e)
			{
	        	
			}
			
			
	    }
	};
}
