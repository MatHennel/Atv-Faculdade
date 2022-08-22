package ifpr.pgua.eic.listatelefonica.models.falhas;

public abstract class FalhaBase extends RuntimeException{    

    public FalhaBase(String msg){
        super(msg);
    }
}
