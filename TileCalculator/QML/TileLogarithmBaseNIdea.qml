import QtQuick 2.12
import com.malamute.calculator 1.0
import "LogarithmHelperFunctions.js" as HelperFunctions

LogarithmTemplate
{
    id: template;
    logarithmBase: idea.n
    divideByBottonText: "Divide by " + parseFloat(idea.n.toPrecision(4));

    Connections
    {
        target: idea
        function onNChanged(n)
        {

            template.setupActionPicture(n)
        }
    }
}
