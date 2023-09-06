class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int time=0;
        int n=energy.size();
        
        for(int i=0;i<n;i++){
            if(energy[i]>=initialEnergy){
                int diff=energy[i]-initialEnergy;
                time+=diff+1;
                initialEnergy+=diff+1;
            }
            if(experience[i]>=initialExperience){
                int diff=experience[i]-initialExperience;
                time+=diff+1;
                initialExperience+=diff+1;
            }
            initialEnergy-=energy[i];
            initialExperience+=experience[i];
        }
        return time;
    }
};