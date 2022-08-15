package ifpr.pgua.eic.quizapp;

import java.util.ArrayList;

import javax.print.DocFlavor.STRING;
import javax.swing.Action;

import javafx.application.Application;
import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class AppGUI extends Application {

    private ControladorQuiz controladorQuiz;

    private Scene cena;
    private VBox vbox;
    private Text enunciado;
    private Button botao;
    private Button botao1;
    private Button botao2;
    private Button botao3;
    private Text resultado;
    private Button proxima;
    private Button resultadoBotao;
    private Text questaoAtual;
    private Text erros;
    private Text acertos;
    private Button reiniciar;

    @Override
    public void init() throws Exception {

        super.init();

        final ArrayList<Questao> lista = new ArrayList<>();

        lista.add(new Questao("Qual a capital do Paraná?", "Curitiba",
                new String[] { "Floripa", "Porto Alegre", "São Paulo" }));
        lista.add(new Questao("Qual a capital de São Paulo?", "São Paulo",
                new String[] { "Floripa", "Rio de Janeiro", "Campo Grande" }));
        lista.add(new Questao("Qual a capital do Acre?", "Rio Branco",
                new String[] { "Manaus", "Palmas", "João Pessoa" }));
        lista.add(new Questao("Qual a capital de Rondonia?", "Porto Velho",
                new String[] { "Belém", "Macapá", "Manaus" }));

        controladorQuiz = new ControladorQuiz(lista);
    }

    private void atualizaTela() {

        final Questao questao = controladorQuiz.getQuestao();
        questaoAtual.setText((controladorQuiz.indiceQuestaoAtual() + 1) + "/" + controladorQuiz.totalQuestoes());
        enunciado.setText(questao.getEnunciado());
        botao.setText(questao.getAlternativas().get(0));
        botao1.setText(questao.getAlternativas().get(1));
        botao2.setText(questao.getAlternativas().get(2));
        botao3.setText(questao.getAlternativas().get(3));

        botao.setDisable(false);
        botao1.setDisable(false);
        botao2.setDisable(false);
        botao3.setDisable(false);

        resultado.setVisible(false);
        proxima.setVisible(false);
        resultadoBotao.setVisible(false);

    }

    private EventHandler respondePergunta() {
        return new EventHandler<Event>() {

            @Override
            public void handle(Event event) {
                Button clicado = (Button) event.getSource();
                String alternativa = clicado.getText();

                boolean ret = controladorQuiz.respondeQuestao(alternativa);

                if (ret) {
                    resultado.setText("Acertou");
                } else {
                    resultado.setText("Errou");
                }

                botao.setDisable(true);
                botao1.setDisable(true);
                botao2.setDisable(true);
                botao3.setDisable(true);

                resultado.setVisible(true);
                proxima.setVisible(true);
                resultadoBotao.setVisible(true);

                

            }
        };
    }

    private EventHandler proximaPergunta() {
        return new EventHandler<Event>() {
            @Override
            public void handle(Event event) {

                if (controladorQuiz.temProximaQuestao()) {
                    controladorQuiz.proximaQuestao();
                    atualizaTela();
                }

                if (!controladorQuiz.temProximaQuestao()) {
                
                    vbox.getChildren().remove(proxima);
                    vbox.getChildren().add(resultadoBotao);
                    

                }

            }
        };
    }

    private EventHandler resultado() {
        return new EventHandler<Event>() {
            @Override
            public void handle(Event event) {
                questaoAtual.setVisible(false);
                vbox.getChildren().remove(resultadoBotao);
                enunciado.setText("Resultados");
                vbox.getChildren().add(acertos);
                acertos.setText("Acertos: " + controladorQuiz.getAcertos());
                acertos.setVisible(true);
                vbox.getChildren().add(erros);
                erros.setText("Erros: " + controladorQuiz.getErros());
                erros.setVisible(true);
                
                vbox.getChildren().remove(resultado);
                vbox.getChildren().add(reiniciar);
                vbox.getChildren().remove(botao);
                vbox.getChildren().remove(botao1);
                vbox.getChildren().remove(botao2);
                vbox.getChildren().remove(botao3);

            }
        };
    }

    private EventHandler reiniciar() {
        return new EventHandler<Event>() {
            @Override
            public void handle(Event event) {

                controladorQuiz.reiniciar();
                vbox.getChildren().remove(reiniciar);
                questaoAtual.setVisible(true);
                vbox.getChildren().add(botao);
                vbox.getChildren().add(botao1);
                vbox.getChildren().add(botao2);
                vbox.getChildren().add(botao3);
                vbox.getChildren().remove(erros);
                vbox.getChildren().remove(acertos);
                vbox.getChildren().add(resultado);
                vbox.getChildren().add(proxima);
                
                vbox.getChildren().remove(resultadoBotao);

                
                

                atualizaTela();

            }
        };
    }

    private void inicializaComponentes() {
        questaoAtual = new Text("");
        enunciado = new Text("Hello World!!");
        resultado = new Text("Resultado");
        acertos = new Text();
        erros = new Text();
        acertos.setVisible(false);
        erros.setVisible(false);
        botao = new Button("Alternativa 1");
        botao.setPrefWidth(200);
        botao.setOnAction(respondePergunta());
        botao1 = new Button("Alternativa 2");
        botao1.setPrefWidth(200);
        botao1.setOnAction(respondePergunta());
        botao2 = new Button("Alternativa 3");
        botao2.setPrefWidth(200);
        botao2.setOnAction(respondePergunta());
        botao3 = new Button("Alternativa 4");
        botao3.setPrefWidth(200);
        botao3.setOnAction(respondePergunta());
        proxima = new Button("Próxima");
        proxima.setOnAction(proximaPergunta());
        proxima.setPrefWidth(200);
        resultadoBotao = new Button("Resultado");
        resultadoBotao.setPrefWidth(200);
        resultadoBotao.setOnAction(resultado());
        reiniciar = new Button("Reiniciar");
        reiniciar.setPrefWidth(200);
        reiniciar.setOnAction(reiniciar());

        vbox = new VBox();

        vbox.getChildren().add(questaoAtual);
        vbox.getChildren().add(enunciado);
        vbox.getChildren().add(botao);
        vbox.getChildren().add(botao1);
        vbox.getChildren().add(botao2);
        vbox.getChildren().add(botao3);
        vbox.getChildren().add(resultado);
        vbox.getChildren().add(proxima);
        vbox.setAlignment(Pos.CENTER);
        vbox.setSpacing(5);

        resultado.setVisible(false);
        proxima.setVisible(false);

    }

    @Override
    public void start(final Stage stage) throws Exception {

        inicializaComponentes();
        atualizaTela();

        cena = new Scene(vbox, 300, 300);

        stage.setScene(cena);
        stage.show();
    }

    public static void main(final String[] args) {
        launch(args);
    }

}