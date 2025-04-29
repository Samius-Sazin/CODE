public class try_catch_throw_exception {
    public static void main(String args[]){
        try{
            //Both syntex are same
            /*
            Exception e1 = new Exception();
            throw e1;
            */
            throw new Exception();
        }
        catch(Exception e){
            System.out.println("Show : " + e.getMessage());
        }
    }
}
