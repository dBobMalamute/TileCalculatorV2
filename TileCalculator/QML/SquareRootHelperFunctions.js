function createBoxes(inputNumber, outputNumber)
{
    let borderWidth
    let spacing;
    let xBoxNum;

    let boxComponent;
    let boxObject;

    let numBoxesOnSide = Math.ceil(outputNumber);

    let col0 = idea.inPortLabelColors[0];
    let col2 = Qt.rgba(1,1,1,0.0)

    if(numBoxesOnSide <= 2)
    {
        spacing = 80;
        borderWidth = 8;
        xBoxNum = 5;
    }
    else if(numBoxesOnSide <= 5)
    {
        spacing = 40;
        borderWidth = 4;
        xBoxNum = 10;
    }
    else if(numBoxesOnSide <= 10)
    {
        spacing = 20;
        borderWidth = 2;
        xBoxNum = 20;
    }
    else if(numBoxesOnSide <= 20)
    {
        spacing = 10;
        borderWidth = 1;
        xBoxNum = 40;
    }
    else if(numBoxesOnSide <= 50)
    {
        spacing = 4;
        borderWidth = 0;
        xBoxNum = 100;
    }
    else if(numBoxesOnSide <= 100)
    {
        spacing = 2;
        borderWidth = 0;
        xBoxNum = 200;
    }

    let fadeInTime = 800 * Math.floor(Math.log2(numBoxesOnSide + 3))

    let i = 0;
    for(i = 0; i < Math.floor(outputNumber); i++)
    {
        boxComponent = Qt.createComponent("MultiplicationBox.qml");
        boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                  boxNumber: i, totalBoxes: numBoxesOnSide*numBoxesOnSide,
                                                  fadeInTime: fadeInTime,
                                                  initialRect: Qt.rect(spacing*i + 0.5,
                                                                         0.5, spacing - 1.0, spacing - 1.0),
                                                  initialColor: col0,
                                                  finalColor: idea.outPortLabelColors[0]})
    }

    let numBoxesToAdd = ((Math.floor(outputNumber)*Math.floor(outputNumber)) - Math.floor(outputNumber));
    for(i = 0; i < numBoxesToAdd; i++)
    {
        boxComponent = Qt.createComponent("MultiplicationBox.qml");
        boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                  boxNumber: Math.floor(outputNumber) + i, totalBoxes: numBoxesOnSide*numBoxesOnSide,
                                                  fadeInTime: fadeInTime,
                                                  initialRect: Qt.rect((i%(Math.floor(outputNumber))) * spacing + 0.5,
                                                                        Math.floor(i/(Math.floor(outputNumber))) * spacing + spacing + 0.5,
                                                                       spacing - 1.0, spacing - 1.0),
                                                  initialColor: col0,
                                                  finalColor: col2})
    }
    if((outputNumber % 1.0) !== 0) // Fraction input1.
    {

        // Fraction boxes along left side.
        boxComponent = Qt.createComponent("MultiplicationBox.qml");
        boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                  boxNumber: Math.floor(outputNumber) + 1, totalBoxes: numBoxesOnSide*numBoxesOnSide, fadeInTime: fadeInTime,
                                                  initialRect: Qt.rect(spacing*Math.floor(outputNumber) + 0.5,
                                                                         0.5, (spacing - 1.0) * (outputNumber % 1.0), spacing - 1.0),
                                                  initialColor: col0,
                                                  finalColor: idea.outPortLabelColors[0]})

        for(i = 1; i < Math.floor(outputNumber); i++)
        {
            boxComponent = Qt.createComponent("MultiplicationBox.qml");
            boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                      boxNumber: Math.floor(outputNumber) * (i+1), totalBoxes: numBoxesOnSide*numBoxesOnSide, fadeInTime: fadeInTime,
                                                      initialRect: Qt.rect(spacing*Math.floor(outputNumber) + 0.5,
                                                                             0.5 + spacing*i, (spacing - 1.0) * (outputNumber % 1.0), spacing - 1.0),
                                                      initialColor: col0,
                                                      finalColor: col2})
        }

        // Fraction boxes along bottom.
        boxComponent = Qt.createComponent("MultiplicationBox.qml");
        boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                  boxNumber: Math.floor(outputNumber) * Math.floor(outputNumber) + 1, totalBoxes: numBoxesOnSide*numBoxesOnSide, fadeInTime: fadeInTime,
                                                  initialRect: Qt.rect(0.5,
                                                                         spacing*Math.floor(outputNumber) + 0.5, spacing - 1.0, (spacing - 1.0) * (outputNumber % 1.0)),
                                                  initialColor: col0,
                                                  finalColor: col2})

        for(i = 1; i < Math.floor(outputNumber); i++)
        {
            boxComponent = Qt.createComponent("MultiplicationBox.qml");
            boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                      boxNumber: Math.floor(outputNumber) * Math.floor(outputNumber) + 1 + i, totalBoxes: numBoxesOnSide*numBoxesOnSide, fadeInTime: fadeInTime,
                                                      initialRect: Qt.rect(0.5 + spacing*i, spacing*Math.floor(outputNumber) + 0.5,
                                                                           spacing - 1.0, (spacing - 1.0) * (outputNumber % 1.0)),
                                                      initialColor: col0,
                                                      finalColor: col2})
        }

        //Bottom left corner fraction box.
        boxComponent = Qt.createComponent("MultiplicationBox.qml");
        boxObject = boxComponent.createObject(animationArea, {borderWidth: borderWidth,
                                                  boxNumber: Math.floor(outputNumber) * Math.floor(outputNumber) + Math.ceil(outputNumber) + 1, totalBoxes: numBoxesOnSide*numBoxesOnSide, fadeInTime: fadeInTime,
                                                  initialRect: Qt.rect(spacing*Math.floor(outputNumber) + 0.5, spacing*Math.floor(outputNumber) + 0.5,
                                                                       (spacing - 1.0) * (outputNumber % 1.0), (spacing - 1.0) * (outputNumber % 1.0)),
                                                  initialColor: col0,
                                                  finalColor: col2})

    }
}

function squareRoot()
{
    for(let i = 0; i < animationArea.children.length; i++)
    {
        animationArea.children[i].animate();
    }
}

function reset()
{
    for(let i = 0; i < animationArea.children.length; i++)
    {
        animationArea.children[i].reset();
    }
}

function clearBoxes()
{
    for(let i = 0; i < animationArea.children.length; i++)
    {
        animationArea.children[i].destroy();
    }
}
