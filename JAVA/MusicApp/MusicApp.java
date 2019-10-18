import javax.sound.midi.*;//our midi package
public class MusicApp{
    public static void main(String[] args){
        MusicApp mini=new MusicApp();
        mini.play();
    }
    public void play(){
        try{
            
            Sequencer player=MidiSystem.getSequencer();//get a musicplayer called sequencer and open it
            player.open();
            
            Sequence seq=new Sequence(Sequence.PPQ,4);//ready bake arguments
            
            Track track=seq.createTrack();//ask sequencer for a track. track remains in a suquence and midi data inside track
            
            ShortMessage a=new ShortMessage();//put midi data into track
            a.setMessage(144,1,44,100);
            MidiEvent noteOn=new MidiEvent(a,1);
            track.add(noteOn);
            
            ShortMessage b=new ShortMessage();
            b.setMessage(128,1,44,100);
            MidiEvent noteoff=new MidiEvent(b,16);
            track.add(noteoff);
            
            player.setSequence(seq);//give sequence inside sequencer..like cd inside player
            player.start();
        }catch(Exception ex){
            ex.printStackTrace();
        }
    }
}
