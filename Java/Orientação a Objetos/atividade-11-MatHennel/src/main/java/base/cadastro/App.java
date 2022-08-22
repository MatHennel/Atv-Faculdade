package base.cadastro;




import base.utils.BaseAppNavigator;
import base.utils.ScreenRegistry;
import javafx.scene.Parent;

public class App extends BaseAppNavigator{
    @Override
    public ScreenRegistry getHomeFXML() {
        return null;
    }

    @Override
    public Parent getHomeParent() {
        return new TelaPrincipal().getRoot();
    }

    @Override
    public String getAppTitle() {
        // TODO Auto-generated method stub
        return "Teste";
    }
   

    public static void main(String[] args){
        launch(args);
    }
}
