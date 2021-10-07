
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// Criadoras: Júlia Formagini Girardelo e Eduarda Gandini Gubert

main()
{
  setlocale(LC_ALL,"portuguese");

    int nCPF, nSexo, nPaisLong, nSort, nIdade, nCont, nCont2, nCont3, nAux2, nPais, nDiasHosp, nPeriodo, nRegiao, nOpcao, nCriancaFem, nJovemFem, nAdultoFem, nIdosoFem, nBra, nAPU, nOut, nNorte, nCentro, nSul, nCriancaMasc, nJovemMasc, nAdultoMasc, nIdosoMasc, nPerCriancaFem, nPerJovemFem, nPerAdulta, nPerIdosa, nPerCriancaMasc, nPerJovemMasc, nPerAdulto, nPerIdoso;
    float nDist, nMaiDist, nPerBra, nPerAPU, nPerOut;
    char sNome[50], sCidade[50], sEstado[50], sCidLong[50];
    nCont=nPeriodo=nMaiDist=nPaisLong=nAux2=nCriancaFem=nJovemFem=nAdultoFem=nIdosoFem=nBra=nAPU=nOut=nNorte=nCentro=nSul=nCriancaMasc=nJovemMasc=nAdultoMasc=nIdosoMasc=0;

        do
        {
            printf("\n Olá seja bem vindo ao Projeto SOLEMAR, deselvolvido por Eduarda Gandini Gubert e Júlia Formagini Girardelo.");
            printf("\n Serão algumas perguntas para nos ajudar a monitorar o nosso turismo.");
            printf("\n Tenha um bom proveito da ilha!!! \n");
            fflush(stdin);
            printf("\nInforme o seu nome: ");
            gets(sNome);
            printf("\nInforme o seu CPF: ");
            scanf("%d",&nCPF);
            printf("\nInforme o seu sexo: 1-Feminino, 2-Masculino: ");
            scanf("%d",&nSexo);
            printf("\nInforme a sua idade: ");
            scanf("%d",&nIdade);
            if((nIdade>0) && (nIdade<12)&&(nSexo==1))
            {
               nCriancaFem++;
            }
            else if((nIdade>13) && (nIdade<24)&&(nSexo==1))
            {
               nJovemFem++;
            }
            else if((nIdade>25) && (nIdade<69)&&(nSexo==1))
            {
               nAdultoFem++;
            }
            else if((nIdade>70)&&(nSexo==1))
            {
               nIdosoFem++;
            }
            else if((nIdade>0) && (nIdade<12)&&(nSexo==2))
            {
               nCriancaMasc++;
            }
            else if((nIdade>13) && (nIdade<24)&&(nSexo==2))
            {
               nJovemMasc++;
            }
            else if((nIdade>25) && (nIdade<69)&&(nSexo==2))
            {
               nAdultoMasc++;
            }
            else if((nIdade>70)&&(nSexo==2))
            {
               nIdosoMasc++;
            }
            fflush(stdin);
            printf("\nInforme a sua cidade origem: ");
            gets(sCidade);
            fflush(stdin);
            printf("\nInforme o seu estado: ");
            gets(sEstado);
            printf("\nInforme o seu país: 1-Brasil, 2-Argentina/Paraguai/Uruguai, 3-Outros:  ");
            scanf("%d",&nPais);

            if(nPais==1)
            {
                nBra++;
            }
            else if(nPais==2)
            {
                nAPU++;
            }
            else if(nPais==3)
            {
                nOut++;
            }
            printf("\nInforme a distância da cidade origem até Florianópolis(em Km): ");
            scanf("%f",&nDist);

            if(nDist>nMaiDist)
            {
                nMaiDist=nDist;
                strcpy(sCidLong, sCidade);
                nPaisLong=nPais;
            }

            printf("\nInforme a quantidade de dias que irão se hospedar:  ");
            scanf("%d",&nDiasHosp);
            nPeriodo+=nDiasHosp;
            printf("\nInforme a região de hospedagem: 1-Norte, 2-Centro, 3-Sul:  ");
            scanf("%d",&nRegiao);
            if((nPais==2)&&(nRegiao==1))
            {
                nNorte++;
            }
            else if((nPais==2)&&(nRegiao==2))
            {
                nCentro++;
            }
            else if((nPais==2)&&(nRegiao==3))
            {
                nSul++;
            }

            nSort=rand()%11;
            printf("\nO número sorteado foi: %d", nSort);

            if(nSort==7)
            {
                printf("\nPARABÉNS!!!! Você ganhou uma bolsa contendo um boné e uma garrafa colorida!!!\n");
            }
            else
            {
                printf("\nAHHHH, não foi desta vez :( \n");
            }

            printf("\nDeseja inserir uma nova pessoa: 1-Sim, 0-Não: ");
            scanf("%d",&nOpcao);

            nCont++;

        } while(nOpcao==1);

        printf("\na) A quantidade de turistas é de: %d ", nCont);
        printf("\n   O período médio de estadia é de: %.1f \n",(float)(nPeriodo/nCont));
        nPerBra=(nBra*100)/nCont;
        nPerAPU=(nAPU*100)/nCont;
        nPerOut=(nOut*100)/nCont;

        if((nBra>nAPU)&&(nBra>nOut))
        {
            if(nAPU>nOut)
            {
                printf("\nb) O percentual de turistas por país é de: Brasil- %.2f%%, Argentina/Paraguai/Uruguai- %.2f%%, Outros- %.2f%%",(float)((nBra*100)/nCont), (float)((nAPU*100)/nCont), (float)((nOut*100)/nCont));
            }
            else
            {
                printf("\nb) O percentual de turistas por país é de: Brasil- %.2f%%, Outros- %.2f%%, Argentina/Paraguai/Uruguai- %.2f%%",(float)((nBra*100)/nCont), (float)((nOut*100)/nCont), (float)((nAPU*100)/nCont));
            }
        }
        else if((nAPU>nBra)&&(nAPU>nOut))
        {
            if (nBra>nOut)
            {
                printf("\nb) O percentual de turistas por país é de: Argentina/Paraguai/Uruguai- %.2f%%, Brasil- %.2f%%, Outros- %.2f%%", (float)((nAPU*100)/nCont),(float)((nBra*100)/nCont), (float)((nOut*100)/nCont));
            }
            else
            {
                 printf("\nb) O percentual de turistas por país é de: Argentina/Paraguai/Uruguai- %.2f%%, Outros- %.2f%%, Brasil- %.2f%%", (float)((nAPU*100)/nCont), (float)((nOut*100)/nCont), (float)((nBra*100)/nCont));
            }
        }

        else if((nOut>nBra)&&(nOut>nAPU))
        {
            if (nBra>nAPU)
            {
                printf("\nb) O percentual de turistas por país é de: Outros- %.2f%%, Brasil- %.2f%%, Argentina/Paraguai/Uruguai- %.2f%%",(float)((nOut*100)/nCont),(float)((nBra*100)/nCont), (float)((nAPU*100)/nCont));
            }
            else
            {
                 printf("\nb) O percentual de turistas por país é de: Outros- %.2f%%, Argentina/Paraguai/Uruguai- %.2f%%, Brasil- %.2f%%", (float)((nOut*100)/nCont), (float)((nAPU*100)/nCont), (float)((nBra*100)/nCont));
            }
        }

        printf("\n   A quantidade e o percentual de pessoas: ");
        printf("\n   Idosas:         %d e %.2f%%", nIdosoFem, (float)(nIdosoFem*100)/nCont);
        printf("\n   Idosos:         %d e %.2f%%", nIdosoMasc, (float)(nIdosoMasc*100)/nCont);
        printf("\n   Adultas:        %d e %.2f%%", nAdultoFem, (float)(nAdultoFem*100)/nCont);
        printf("\n   Adultos:        %d e %.2f%%", nAdultoMasc, (float)(nAdultoMasc*100)/nCont);
        printf("\n   Jovem menina:   %d e %.2f%%", nJovemFem,(float)(nJovemFem*100)/nCont);
        printf("\n   Jovem menino:   %d e %.2f%%", nJovemMasc, (float)(nJovemMasc*100)/nCont);
        printf("\n   Criança menina: %d e %.2f%%", nCriancaFem,(float)(nCriancaFem*100)/nCont);
        printf("\n   Criança menino: %d e %.2f%%\n", nCriancaMasc,(float)(nCriancaMasc*100)/nCont);


        if ((nNorte>nCentro)&&(nNorte>nSul))
        {
            printf("\nc) A região preferida pelos turistas estrangeiros da América do Sul é a Norte\n");
        }

        else if ((nCentro>nNorte)&&(nCentro>nSul))
        {
            printf("\nc) A região preferida pelos turistas estrangeiros da América do Sul é o Centro\n");
        }

        else if ((nSul>nCentro)&&(nSul>nNorte))
        {
            printf("\nc) A região preferida pelos turistas estrangeiros da América do Sul é a Sul\n");
        }

        printf("\nd) A quilometragem da cidade e país mais distante que vieram a Florianópolis: ");

        if(nPaisLong==1)
        {
             printf("\n   %.1f Km - %s - Brasil\n",nMaiDist, sCidLong);
        }
        else if(nPaisLong==2)
        {
             printf("\n   %.1f Km - %s - Argentina/Paraguai/Uruguai\n",nMaiDist, sCidLong);
        }
        else if(nPaisLong==3)
        {
             printf("\n   %.1f Km - %s - Outro país\n",nMaiDist, sCidLong);
        }
    }
