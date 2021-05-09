#include <string>
#include <ostream>
#ifndef ALUNO_H
#define ALUNO_H
using namespace std;
class Aluno {
private:
    string m_nome;
    string m_matricula;
public:
    Aluno() {
        m_nome="João Ninguém";
        m_matricula="000000";
    }
    Aluno(string nome) {
        m_nome=nome;
        m_matricula="000000";
    }
    Aluno(string nome,string matricula) {
        m_nome=nome;
        m_matricula=matricula;
    }
    void setNome(string nome) {
        m_nome=nome;
    }
    string getNome() {
        return m_nome;
    }
    void setMatricula(string matricula) {
        m_nome=matricula;
    }
    string getMatricula() {
        return m_matricula;
    }
    int hashCode() {
        int hashValue=0;
        // resolve o polinômio para x=31
        for (int i=0;i<m_nome.length();i++)
            hashValue=31*hashValue+m_nome[i];
        // trata um possível int overflow
        if (hashValue<0)
            hashValue=-hashValue;        
        return  hashValue;          
    }
    friend bool operator==(Aluno aluno1, Aluno aluno2) {
        return (aluno1.getNome().compare(aluno2.getNome())==0);
    }
    friend ostream& operator<<(std::ostream &strm, const Aluno &aluno) {
        return strm <<"Nome: "<<aluno.m_nome<<" - Matrícula: "<<aluno.m_matricula;
    }
};
#endif /* ALUNO_H */