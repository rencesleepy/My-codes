    public class ScoreRecovery {
        public static void main (String[] args) {
            String[] scores = {"85" ,"abc" , "105"};
            for (String score : scores)
            {
                try
                {
                    System.out.println("Checking score: " + score);
                    evaluateScore(score);
                }
                catch(NumberFormatException e)
                {
                    System.out.println("Invalid input: Score must be a number");
                }
                catch(InvalidScoreException e)
                {
                    System.out.println("Invalid score: " + e.getMessage());
                }
                finally
                {
                    System.out.println("Validation attempt completed");
                }

            }

        }
        public static void evaluateScore(String scoreText)
            throws InvalidScoreException {
            int score = Integer.parseInt(scoreText);
            if (score < 0 || score > 100)
            {
                throw new InvalidScoreException("Score must be between 0 and 100");
            }

            if (score >= 75) {
                System.out.println(score + " - PASSED");
            }
            else
            {
                System.out.println(score + "- FAILED");
            }
        }
    }