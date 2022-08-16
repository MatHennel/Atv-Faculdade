package base.exemplos.fxml;

import java.net.URL;

import base.utils.BaseAppNavigator;
import base.utils.ScreenRegistry;
import javafx.scene.Parent;

public class App extends BaseAppNavigator{

    public static final ScreenRegistry PRINCIPAL = new ScreenRegistry(App.class,"telas/principal.fxml",o->new JanelaPrincipal());
    public static final ScreenRegistry PARTE1 = new ScreenRegistry(App.class,"telas/parte1.fxml",o->new Parte1());
    public static final ScreenRegistry PARTE2 = new ScreenRegistry(App.class,"telas/parte2.fxml",o->new Parte2());
    public static final ScreenRegistry TELA1 = new ScreenRegistry(App.class,"telas/tela1.fxml",o->new Tela1());


    @Override
    public ScreenRegistry getHomeFXML() {
        System.out.println("aqui...");
        System.out.println(PRINCIPAL.getFxmlResource());
        return PRINCIPAL;
    }

    @Override
    public Parent getHomeParent() {
        return null;
    }

    @Override
    public String getAppTitle() {
        return "Teste";
    }


    
}
