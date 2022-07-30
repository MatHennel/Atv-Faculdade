package ifpr.pgua.eic.quizapp;

import java.util.ArrayList;
import java.util.Collections;

public class ControladorQuiz {
    
    private ArrayList<Questao> questoes;
    private int questaoAtual;
    private int acertos;
    private int erros;

    public ControladorQuiz(ArrayList<Questao> questoes){
        
        Collections.shuffle(questoes);

        this.questoes = questoes;
        questaoAtual = 0;
        acertos = 0;
        erros = 0;
    }

    public int indiceQuestaoAtual(){
        return questaoAtual;
    }

    public int totalQuestoes(){
        return questoes.size();
    }

    public boolean temProximaQuestao(){
        return questaoAtual < questoes.size() - 1;
    }

    public void proximaQuestao(){
        questaoAtual += 1;
    }

    public Questao getQuestao(){
        if(questaoAtual < questoes.size()){
            return questoes.get(questaoAtual);
        }
        return null;
        
    }

    public boolean respondeQuestao(String alternativa){
        if(questoes.get(questaoAtual).getRespostaCorreta().equals(alternativa)){
            acertos +=1;
            return true;
        }
        erros +=1;
        return false;
    }

    public int getAcertos(){
        return acertos;
    }

    public int getErros(){
        return erros;
    }

    public void reiniciar(){
        Collections.shuffle(questoes);
        questaoAtual = 0;
        acertos = 0;
        erros = 0;
    }

}
