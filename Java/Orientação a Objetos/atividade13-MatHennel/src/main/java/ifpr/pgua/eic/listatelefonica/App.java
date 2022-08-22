package ifpr.pgua.eic.listatelefonica;

import ifpr.pgua.eic.listatelefonica.controllers.JanelaCadastro;
import ifpr.pgua.eic.listatelefonica.controllers.JanelaPrincipal;
import ifpr.pgua.eic.listatelefonica.controllers.Listar;
import ifpr.pgua.eic.listatelefonica.models.ListaTelefonica;
import ifpr.pgua.eic.listatelefonica.utils.BaseAppNavigator;
import ifpr.pgua.eic.listatelefonica.utils.ScreenRegistryFXML;



/**
 * JavaFX App
 */
public class App extends BaseAppNavigator {

    private ListaTelefonica contato;

    public void init() throws Exception {
        super.init();

        contato = new ListaTelefonica();
    }

    

    public static void main(String[] args) {
        launch();
    }

    @Override
    public String getHome() {
        // TODO Auto-generated method stub
        return "PRINCIPAL";
    }


    @Override
    public String getAppTitle() {
        
        return "Lista Telefônica";
    }

    @Override
    public void registrarTelas() {
        registraTela("PRINCIPAL",new ScreenRegistryFXML(App.class, "principal.fxml", o->new JanelaPrincipal()));
        registraTela("CADASTRO", new ScreenRegistryFXML(App.class, "registrar.fxml", o->new JanelaCadastro(contato)));
        registraTela("LISTA", new ScreenRegistryFXML(App.class, "listar.fxml", o->new Listar(contato)));
    
    }

}