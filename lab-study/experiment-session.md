# Investigating Vibrotactile Distance Encodings: Experiment Session

## Setup and Explanation

### Helmet Fitting

Please put the helmet on your head and adjust the tightness as necessary, until you are comfortable with the placement.

### Tactors

Three vibration motors (tactors) have been placed inside the helmet, equidistant along the midline of the head, as shown in the [provided diagram](../design/head-regions.pdf). These tactors will now be activated individually so you can feel where they are located. If needed, please feel free to ask the evaluator to activate a tactor again.

### Following Distance

We believe an appropriate way of warning a cyclist of an approaching vehicle, is to convey to them the following distance of the vehicle behind. Despite being called the following distance, this is actually a measure of the time it would take the vehicle following behind to reach your location, if you were to suddenly stop. In this lab-study, we quantise this metric into three discrete categories: far, near, and imminent. The encoding schemes which you will be evaluating, each have a unique way of communicating these distances to a cyclist using vibrotactile cues, delivered using the three vibration motors in the helmet.

### Questionnaire - Part 1

Before we go on to describe and evaluate the encoding schemes, please follow the link and complete the first section of the questionnaire: [TactiHelm - Lab Study Questionnaire](https://forms.office.com/e/G1WUgtXXxy).

Once this is done, please navigate to the next part of the study: [Experiment Session](./experiment-session.md).

## Schemes (Training)

The following encoding schemes have been defined for study. These schemes were created by varying the pattern (the number of stimuli and the time between stimuli) of a single vibration rhythm, and the number of times a rhythm is repeated (the rhythm duration).

1. Singular Pattern with Monotonic Duration
2. Singular Pattern with Varying Duration
3. Sequential Synchronous Pattern with Monotonic Duration
4. Sequential Synchronous Pattern with Varying Duration
5. Sequential Asynchronous Pattern with Monotonic Duration
6. Sequential Asynchronous Pattern with Varying Duration

### Descriptions

With a **Singular Pattern**, only the tactor at the location relative to the specified distance
is activated.

| Distance | Activated Tactors |
|:--------:|:-----------------:|
|    Far   |        Rear       |
|   Near   |        Mid        |
| Imminent |       Front       |

With a **Sequential Synchronous Pattern**, all tactors up to the tactor at the location relative
to the specified distance are activated at the same time.

| Distance |   Activated Tactors  |
|:--------:|:--------------------:|
|    Far   |         Rear         |
|   Near   |     Rear **and** Mid     |
| Imminent | Rear, Mid, **and** Front |

With a **Sequential Asynchronous Pattern**, all tactors up to the tactor at the location relative
to the specified distance are activated one at a time with an interval between them, in sequential order.

| Distance |   Activated Tactors  |
|:--------:|:--------------------:|
|    Far   |         Rear         |
|   Near   |    Rear **then** Mid   |
| Imminent | Rear, **then** Mid, **then** Front |

With a **Monotic Duration**, each vibrational cue is delivered only once.

| Distance | Repetitions |
|:--------:|:-----------:|
|    Far   |      1      |
|   Near   |      1      |
| Imminent |      1      |

With a **Varying Duration**, the number of times a vibrational cue is repeated increases when the distances decreases.

| Distance | Repetitions |
|:--------:|:-----------:|
|    Far   |      1      |
|   Near   |      2      |
| Imminent |      3      |

### Additional Information

**Stimulus Intensity**
The intensity of each stimulus throughout the experiment is constant.

**Cue Delay**
A vibrational cue will be delivered when a vehicle is first detected and every time the closest detected vehicle changes distance category.

|      Pattern Scheme     | Duration Scheme | Distance |      Activated Tactors     | Repetitions |
|:-----------------------:|:---------------:|:--------:|:--------------------------:|:-----------:|
|         Singular        |    Monotonic    |    Far   |            Rear            |      1      |
|         Singular        |    Monotonic    |   Near   |             Mid            |      1      |
|         Singular        |    Monotonic    | Imminent |            Front           |      1      |
|         Singular        |     Varying     |    Far   |            Rear            |      1      |
|         Singular        |     Varying     |   Near   |             Mid            |      2      |
|         Singular        |     Varying     | Imminent |            Front           |      3      |
|  Sequential Synchronous |    Monotonic    |    Far   |            Rear            |      1      |
|  Sequential Synchronous |    Monotonic    |   Near   |        Rear **and** Mid        |      1      |
|  Sequential Synchronous |    Monotonic    | Imminent |    Rear, Mid, **and** Front    |      1      |
|  Sequential Synchronous |     Varying     |    Far   |            Rear            |      1      |
|  Sequential Synchronous |     Varying     |   Near   |        Rear **and** Mid        |      2      |
|  Sequential Synchronous |     Varying     | Imminent |    Rear, Mid, **and** Front    |      3      |
| Sequential Asynchronous |    Monotonic    |    Far   |            Rear            |      1      |
| Sequential Asynchronous |    Monotonic    |   Near   |        Rear **then** Mid       |      1      |
| Sequential Asynchronous |    Monotonic    | Imminent | Rear, **then** Mid, **then** Front |      1      |
| Sequential Asynchronous |     Varying     |    Far   |            Rear            |      1      |
| Sequential Asynchronous |     Varying     |   Near   |        Rear **then** Mid       |      2      |
| Sequential Asynchronous |     Varying     | Imminent | Rear, **then** Mid, **then** Front |      3      |

## Evaluation

### Part 1

You will now evaluate each of the six schemes.

You will be presented with six scenarios - simulating the approach of a vehicle from behind. For each scenario, one of the six schemes will be used to convey the following distance of the approaching vehicle. Before each scenario begins, you will be told which scheme is being used and will be given the chance to ask any questions. Each scenario will last roughly 60 seconds.

During a scenario, each time you feel a vibrational cue, please immediately note down what following distance you believe is being conveyed, using the aforementioned terms, far, near, and imminent.
