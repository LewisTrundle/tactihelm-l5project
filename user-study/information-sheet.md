# TactiHelm User Study: Information Sheet

## Important Links

- [Task List](./task-list.md)
- [User Manual](../user-manual.md)
- [NASA-TLX Questionnaire](https://www.keithv.com/software/nasatlx/nasatlx.html)
- [Usability Questionnaire](https://forms.office.com/e/fHHZbRSN7M)
- [2469635t@student.gla.ac.uk](mailto:2469635t@student.gla.ac.uk)

## Setup and Equipment

This evaluation requires the use of the following equipment. Before starting the study, please ensure you have read the required information and you understand how to operate this equipment:

- The TactiHelm helmet
- A bike radar
- A headset

### What is TactiHelm?

TactiHelm is a smart-helmet which provides vibrotactile feedback to a cyclist warning them of an approaching vehicle. The helmet connects to a bike radar, attached to the rear of a user's bike. The radar detects the approaching vehicle and communicates this information to the helmet. The helmet uses this information to activate the vibrational motors inside the helmet - activating them in some pattern, from which the cyclist can interpret information about the approaching vehicle.

### The Helmet

Please try on the helmet and adjust the tightness as necessary, until you are comfortable with the placement.

Three vibration motors (tactors) have been placed inside the helmet, equidistant along the midline of the head, as shown in the [provided diagram](../design/head-regions.pdf). These tactors will now be activated individually so you can feel where they are located. If needed, please feel free to ask the evaluator to activate a tactor again.

### Encoding Distance Using Vibrations

We believe an appropriate way of warning a cyclist of an approaching vehicle, is to convey to them the *following distance* of the vehicle behind. Despite being called the *following distance*, this is actually a measure of the time it would take the vehicle following behind to reach your location, if you were to suddenly stop. In this study, we have split this metric into three discrete categories: *far*, *near*, and *imminent*. These three values are used to decide how to vibrate the helmet.

The helmet will vibrate using what's called a **wave pattern**. This vibrates all the tactors (starting at the rear) in sequence, up to a specific point, relative to the detected distance. Hence the name 'Wave', as the tactors are activated like a wave across your scalp. In addition to this, the vibrational pattern has a **varying duration**. This means the number of times the vibrational pattern repeats, depends on the distance. This is described in the table below.

The helmet will only vibrate under two conditions:

- a vehicle is first detected.
- the following distance of the closest detected vehicle changes category.

| Distance |   Activated Tactors  |
|:--------:|:--------------------:|
|    Far   |         Rear (x1 time)        |
|   Near   |    Rear **then** Mid (x2 times)  |
| Imminent | Rear, **then** Mid, **then** Front (x3 times) |

### User Manual

Please ensure that you read the [user manual](../user-manual.md) before using TactiHelm.

## Performing the Evaluation

!!!!!
STILL TO COMPLETE
!!!!!

## Questionnaires

After completion of your second primary commute, you will be asked to complete two questionnaires: the NASA Task Load Index questionnaire, and a usability survey.

### Nasa-TLX Questionnaire

The [NASA Task Load Index questionnaire](https://humansystems.arc.nasa.gov/groups/tlx/) is a subjective workload assessment tool, which provides respondents with an overall score regarding their mental, physical, and temporal demand, performance, effort, and frustration, in completing a task.

An online version of this can be found [here](https://www.keithv.com/software/nasatlx/nasatlx.html). Please read it carefully before completing it. Once complete, please take a clear picture or screenshot of your results, and send this to your evaluator. Here is an [example](./nasa-example.png).

### Usability Survey

The usability survey can be found [here](https://forms.office.com/e/fHHZbRSN7M). This survey automatically saves and submits your results, so there is no need to take a picture of your results.
