#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "SeparateChainingHashTable.h"
#include "QuadraticProbingHashTable.h"
#include "Aluno.h"

using namespace std;       

main(int argc, char** argv) { 
  /*
    // Guardando os alunos em uma lista
    LinkedList<Aluno> minhaLista=LinkedList<Aluno>();
    minhaLista.add(Aluno("Belchior","999999")); 
    minhaLista.add(Aluno("Jesus","888888")); 
    minhaLista.add(Aluno("Maria","777777"));
    minhaLista.add(Aluno("Pedro","666666"));
    minhaLista.add(Aluno("Judas","555555"));
    minhaLista.add(Aluno("José","444444"));
    minhaLista.add(Aluno("Madalena","333333"));   
    minhaLista.add(Aluno("Paulo","222222"));      
    minhaLista.add(Aluno("Gaspar","111111"));
    minhaLista.add(Aluno("Baltazar","000000"));   
    cout<<"Impressão da Lista"<<endl;
    minhaLista.print();
    // Procurando um elemento na tabela
    try {
      Aluno found=minhaLista.find(Aluno("Judas"));      
      cout<<"Achado:"<<found.getNome()<<"/"<<found.getMatricula()<<endl;
    }
    catch (const char* ex) {          
        cout<<ex<<endl;
    }    
*/
// Guardando os alunos em uma hash table (Encadeamento Separado)
    SeparateChainingHashTable<Aluno> hashTable1=SeparateChainingHashTable<Aluno>(13);

    hashTable1.insert(Aluno("Belchior","999999")); 
    hashTable1.insert(Aluno("Jesus","888888")); 
    hashTable1.insert(Aluno("Maria","777777"));
    hashTable1.insert(Aluno("Pedro","666666"));
    hashTable1.insert(Aluno("Judas","555555"));
    hashTable1.insert(Aluno("José","444444"));
    hashTable1.insert(Aluno("Madalena","333333"));   
    hashTable1.insert(Aluno("Paulo","222222"));      
    hashTable1.insert(Aluno("Gaspar","111111"));
    hashTable1.insert(Aluno("Baltazar","000000"));   
    cout<<"Impressão da Tabela Hash (Encadeamento Separado)"<<endl;    
    hashTable1.print(); 
    // Procurando um elemento na tabela
    try {
      Aluno found=hashTable1.find(Aluno("Jorge"));      
      cout<<"Achado:"<<found.getNome()<<"/"<<found.getMatricula()<<endl;
    }
    catch (const char* ex) {          
        cout<<ex<<endl;
    }
 /*
    // Guardando os alunos em uma hash table (Endereçamento Aberto)
    QuadraticProbingHashTable<Aluno> hashTable2=QuadraticProbingHashTable<Aluno>(10);

    hashTable2.insert(Aluno("Belchior","999999")); 
    hashTable2.insert(Aluno("Jesus","888888")); 
    hashTable2.insert(Aluno("Maria","777777"));
    hashTable2.insert(Aluno("Pedro","666666"));
    hashTable2.insert(Aluno("Judas","555555"));
    hashTable2.insert(Aluno("José","444444"));
    hashTable2.insert(Aluno("Madalena","333333"));   
    hashTable2.insert(Aluno("Paulo","222222"));      
    hashTable2.insert(Aluno("Gaspar","111111"));
    hashTable2.insert(Aluno("Baltazar","000000"));   
    cout<<"Impressão da Tabela Hash (Endereçamento Aberto)"<<endl;    
    hashTable2.print(); 
    // Procurando um elemento na tabela
    try {
      Aluno found=hashTable2.find(Aluno("Judas"));      
      cout<<"Achado:"<<found.getNome()<<"/"<<found.getMatricula()<<endl;
    }
    catch (const char* ex) {          
        cout<<ex<<endl;
    }    
 */
    return 0;
}
