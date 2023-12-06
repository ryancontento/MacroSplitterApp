namespace MacroSplitterApp.Pages
{
    public partial class MacroSplitter
    {

        private double proteinGrams = 0;
        private double proteinGramsPerMeal = 0;
        private double carbGrams = 0;
        private double carbGramsPerMeal = 0;
        private double fatGrams = 0;
        private double fatGramsPerMeal = 0;
        private double mealsPerDay = 0;
        private int preWorkoutCarbPercent = 0;
        private int postWorkoutCarbPercent = 0;
        public string? SelectedOption { get; set; }

        private void CalculateMacrosPerMeal()
        {
            proteinGramsPerMeal = proteinGrams / mealsPerDay;
            carbGramsPerMeal = carbGrams / mealsPerDay;
            fatGramsPerMeal = fatGrams / mealsPerDay;
        }

        private void Reset()
        {
            SelectedOption = null;
        }
    }
}