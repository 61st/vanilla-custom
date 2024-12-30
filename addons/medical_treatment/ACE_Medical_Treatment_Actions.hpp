class ACEGVAR(medical_treatment,actions) {
    class FieldDressing;
    class Morphine;
    class Paracetamol: Morphine {
        displayName ="Use Tylenol";
        displayNameProgress = "Using baby Tylenol";
    };
};