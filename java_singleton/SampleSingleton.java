public class SampleSingleton {
  private static SampleSingleton instance;
  private SampleSingleton() {
    instance = this;
  }
  public static synchronized SampleSingleton getInstance() {
    if(instance)
      return instance;
    else
      return new SampleSingleton();
  }
}
