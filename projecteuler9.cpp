#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ans[3001]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,60,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,480,-1,-1,-1,-1,-1,780,-1,-1,-1,-1,-1,1620,-1,-1,-1,2040,-1,-1,-1,-1,-1,-1,-1,3840,-1,-1,-1,-1,-1,-1,-1,4200,-1,-1,-1,7500,-1,-1,-1,-1,-1,-1,-1,-1,-1,12180,-1,12960,-1,-1,-1,-1,-1,-1,-1,16320,-1,-1,-1,20580,-1,-1,-1,-1,-1,21060,-1,-1,-1,-1,-1,30720,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,43740,-1,-1,-1,33600,-1,-1,-1,-1,-1,-1,-1,60000,-1,-1,-1,-1,-1,66780,-1,-1,-1,-1,-1,79860,-1,-1,-1,-1,-1,-1,-1,97440,-1,-1,-1,103680,-1,-1,-1,-1,-1,97500,-1,-1,-1,120120,-1,131820,-1,-1,-1,130560,-1,-1,-1,-1,-1,-1,-1,164640,-1,-1,-1,-1,-1,-1,-1,192720,-1,-1,-1,202500,-1,92820,-1,-1,-1,-1,-1,-1,-1,-1,-1,245760,-1,-1,-1,-1,-1,235620,-1,255000,-1,-1,-1,294780,-1,-1,-1,277680,-1,328860,-1,-1,-1,-1,-1,349920,-1,-1,-1,199980,-1,-1,-1,268800,-1,-1,-1,411540,-1,-1,-1,-1,-1,453960,-1,-1,-1,-1,-1,480000,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,555660,-1,-1,-1,-1,-1,-1,-1,595140,-1,-1,-1,638880,-1,-1,-1,-1,-1,568620,-1,-1,-1,-1,-1,730020,-1,-1,-1,779520,-1,-1,-1,-1,-1,643500,-1,829440,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,937500,-1,-1,-1,-1,-1,354960,-1,960960,-1,-1,-1,1054560,-1,-1,-1,-1,-1,-1,-1,1044480,-1,-1,-1,1180980,-1,-1,-1,-1,-1,1265880,-1,-1,-1,-1,-1,1317120,-1,-1,-1,1063860,-1,-1,-1,-1,-1,-1,-1,1463340,-1,1522500,-1,1541760,-1,-1,-1,-1,-1,-1,-1,1620000,-1,-1,-1,742560,-1,-1,-1,-1,-1,-1,-1,1787460,-1,1761540,-1,-1,-1,1803060,-1,619020,-1,-1,-1,1966080,-1,-1,-1,-1,-1,1713660,-1,1440600,-1,-1,-1,2156220,-1,-1,-1,2040000,-1,-1,-1,-1,-1,-1,-1,2413320,-1,-1,-1,-1,-1,-1,-1,2221440,-1,1855920,-1,2630880,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2799360,-1,-1,-1,-1,-1,-1,-1,2715240,-1,2943720,-1,3039180,-1,-1,-1,2150400,-1,2632500,-1,-1,-1,-1,-1,3292320,-1,-1,-1,-1,-1,3243240,-1,-1,-1,-1,-1,3631680,-1,-1,-1,-1,-1,-1,-1,3220140,-1,-1,-1,3840000,-1,-1,-1,-1,-1,-1,-1,-1,-1,4177740,-1,4135260,-1,4253340,-1,-1,-1,-1,-1,-1,-1,-1,-1,4445280,-1,-1,-1,-1,-1,3832140,-1,-1,-1,-1,-1,4770420,-1,-1,-1,4761120,-1,-1,-1,-1,-1,-1,-1,5203440,-1,-1,-1,5290740,-1,-1,-1,-1,-1,-1,-1,5467500,-1,-1,-1,2097120,-1,5088720,-1,-1,-1,-1,-1,5840160,-1,-1,-1,-1,-1,-1,-1,6236160,-1,-1,-1,6229380,-1,-1,-1,-1,-1,6044280,-1,5148000,-1,-1,-1,6635520,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,7058940,-1,-1,-1,-1,-1,6361740,-1,-1,-1,4825860,-1,7500000,-1,-1,-1,-1,-1,-1,-1,6283680,-1,-1,-1,7959060,-1,-1,-1,7687680,-1,-1,-1,-1,-1,-1,-1,8436480,-1,-1,-1,-1,-1,8879220,-1,-1,-1,-1,-1,8932620,-1,-1,-1,8355840,-1,-1,-1,8027460,-1,5678340,-1,9447840,-1,2441400,-1,-1,-1,-1,-1,-1,-1,-1,-1,10127040,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,10536960,-1,-1,-1,-1,-1,-1,-1,10022520,-1,-1,-1,11111580,-1,-1,-1,-1,-1,11166960,-1,-1,-1,-1,-1,11706720,-1,-1,-1,12180000,-1,12256920,-1,12334080,-1,-1,-1,12322740,-1,-1,-1,-1,-1,11324040,-1,-1,-1,-1,-1,12960000,-1,-1,-1,-1,-1,-1,-1,9227400,-1,-1,-1,13618860,-1,-1,-1,14142240,-1,-1,-1,-1,-1,-1,-1,14299680,-1,-1,-1,14092320,-1,12187500,-1,-1,-1,-1,-1,15002820,-1,-1,-1,13992360,-1,-1,-1,-1,-1,-1,-1,15728640,-1,16211580,-1,-1,-1,-1,-1,-1,-1,-1,-1,16477500,-1,16773900,-1,11524800,-1,-1,-1,-1,-1,-1,-1,17249760,-1,-1,-1,-1,-1,9903180,-1,16984800,-1,-1,-1,18045780,-1,-1,-1,-1,-1,15352740,-1,-1,-1,-1,-1,19306560,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,19710540,-1,-1,-1,17771520,-1,-1,-1,14847360,-1,-1,-1,21047040,-1,-1,-1,-1,-1,-1,-1,-1,-1,21603600,-1,21474660,-1,-1,-1,-1,-1,17374500,-1,-1,-1,-1,-1,22394880,-1,-1,-1,-1,-1,19023420,-1,-1,-1,19769880,-1,23341020,-1,-1,-1,24090000,-1,22905540,-1,23549760,-1,-1,-1,24313440,-1,-1,-1,-1,-1,-1,-1,17203200,-1,-1,-1,25848900,-1,-1,-1,-1,-1,-1,-1,-1,-1,26759460,-1,26338560,-1,-1,-1,-1,-1,24997140,-1,24820680,-1,-1,-1,27391980,-1,-1,-1,15381600,-1,23236980,-1,-1,-1,-1,-1,29053440,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,29582340,-1,29417700,-1,25761120,-1,-1,-1,-1,-1,-1,-1,30720000,-1,-1,-1,-1,-1,16335060,-1,-1,-1,-1,-1,31886460,-1,-1,-1,-1,-1,-1,-1,33421920,-1,-1,-1,33082080,-1,25616280,-1,34026720,-1,34178760,-1,7157280,-1,-1,-1,34307220,-1,-1,-1,31875000,-1,-1,-1,-1,-1,-1,-1,35562240,-1,-1,-1,10307220,-1,-1,-1,-1,-1,-1,-1,36847500,-1,-1,-1,-1,-1,38372400,-1,-1,-1,-1,-1,38163360,-1,-1,-1,-1,-1,-1,-1,38088960,-1,-1,-1,39510180,-1,-1,-1,-1,-1,41107500,-1,-1,-1,21469980,-1,41627520,-1,-1,-1,-1,-1,-1,-1,42325920,-1,-1,-1,42298140,-1,-1,-1,-1,-1,-1,-1,-1,-1,41201160,-1,44127720,-1,-1,-1,-1,-1,-1,-1,16776960,-1,-1,-1,45214260,-1,-1,-1,-1,-1,-1,-1,30911100,-1,45721980,-1,46721280,-1,-1,-1,-1,-1,39509340,-1,-1,-1,-1,-1,48261420,-1,-1,-1,49889280,-1,47561580,-1,-1,-1,-1,-1,49835040,-1,-1,-1,-1,-1,48682620,-1,-1,-1,-1,-1,51442500,-1,-1,-1,41184000,-1,-1,-1,-1,-1,25743900,-1,53084160,-1,-1,-1,-1,-1,-1,-1,55238040,-1,-1,-1,54760380,-1,-1,-1,-1,-1,56745000,-1,-1,-1,-1,-1,56471520,-1,49970760,-1,-1,-1,-1,-1,-1,-1,-1,-1,58217940,-1,59840340,-1,-1,-1,-1,-1,38606880,-1,-1,-1,60000000,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,61818060,-1,-1,-1,50269440,-1,63969360,-1,-1,-1,-1,-1,65159640,-1,-1,-1,-1,-1,53758380,-1,66102960,-1,-1,-1,65563620,-1,-1,-1,63957960,-1,51443640,-1,-1,-1,-1,-1,67491840,-1,-1,-1,-1,-1,50109840,-1,-1,-1,-1,-1,71033760,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,71460960,-1,31837260,-1,71411340,-1,-1,-1,66846720,-1,-1,-1,73502580,-1,-1,-1,64219680,-1,62015460,-1,45426720,-1,-1,-1,75582720,-1,-1,-1,74392500,-1,77482020,-1,-1,-1,-1,-1,77701740,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,81016320,-1,-1,-1,-1,-1,79480440,-1,-1,-1,83542620,-1,82057860,-1,76878420,-1,-1,-1,-1,-1,-1,-1,-1,-1,84295680,-1,-1,-1,-1,-1,71077500,-1,-1,-1,-1,-1,86573820,-1,-1,-1,80180160,-1,-1,-1,90167220,-1,-1,-1,88892640,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,91252500,-1,-1,-1,-1,-1,88884180,-1,-1,-1,-1,-1,93653760,-1,-1,-1,-1,-1,-1,-1,97440000,-1,-1,-1,98055360,-1,17335980,-1,98672640,-1,80981940,-1,-1,-1,-1,-1,98581920,-1,-1,-1,-1,-1,-1,-1,-1,-1,101474160,-1,101109540,-1,80437500,-1,-1,-1,-1,-1,-1,-1,-1,-1,103680000,-1,-1,-1,-1,-1,-1,-1,-1,-1,78073800,-1,106293660,-1,-1,-1,95244240,-1,-1,-1,-1,-1,-1,-1,108950880,-1,-1,-1,-1,-1,112798980,-1,113137920,-1,-1,-1,111652020,-1,-1,-1,103332120,-1,114840180,-1,-1,-1,-1,-1,114397440,-1,-1,-1,-1,-1,-1,-1,112738560,-1,-1,-1,117187500,-1,-1,-1,-1,-1,-1,-1,71275620,-1,-1,-1,120022560,-1,-1,-1,-1,-1,124126860,-1,111938880,-1,-1,-1,122902980,-1,-1,-1,-1,-1,103467780,-1,-1,-1,-1,-1,125829120,-1,-1,-1,129692640,-1,-1,-1,-1,-1,-1,-1,128801340,-1,116798700,-1,-1,-1,86651040,-1,-1,-1,-1,-1,131820000,-1,-1,-1,134191200,-1,57393900,-1,92198400,-1,-1,-1,134885460,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,140492880,-1,-1,-1,-1,-1,116124060,-1,-1,-1,-1,-1,142849980,-1,-1,-1,135878400,-1,-1,-1,-1,-1,-1,-1,144366240,-1,148194060,-1,118651260,-1,-1,-1,-1,-1,-1,-1,147622500,-1,-1,-1,102433800,-1,-1,-1,121196460,-1,-1,-1,154452480,-1,-1,-1,-1,-1,155708280,-1,140598840,-1,-1,-1,154281180,-1,-1,-1,-1,-1,158235000,-1,-1,-1,-1,-1,157684320,-1,-1,-1,-1,-1,-1,-1,142172160,-1,-1,-1,161137140,-1,-1,-1,118778880,-1,114735960,-1,-1,-1,-1,-1,168376320,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,168193260,-1,159879720,-1,-1,-1,-1,-1,172828800,-1,155477700,-1,171797280,-1,-1,-1,-1,-1,163195560,-1,-1,-1,-1,-1,175452420,-1,-1,-1,162194280,-1,28964040,-1,-1,-1,-1,-1,179159040,-1,-1,-1,-1,-1,-1,-1,125122200,-1,-1,-1,182917500,-1,-1,-1,-1,-1,-1,-1,158159040,-1,190312500,-1,186728160,-1,-1,-1,-1,-1,-1,-1,192720000,-1,-1,-1,190591380,-1,-1,-1,188398080,-1,160195620,-1,-1,-1,-1,-1,194507520,-1,-1,-1,-1,-1,171766980,-1,-1,-1,-1,-1,198476940,-1,-1,-1,137625600,-1,157728480,-1,-1,-1,82042740,-1,206791200,-1,-1,-1,86889660,-1,-1,-1,-1,-1,-1,-1,206577060,-1,-1,-1,-1,-1,-1,-1,214075680,-1,-1,-1,210708480,-1,-1,-1,-1,-1,177045180,-1,-1,-1,-1,-1,214894620,-1,-1,-1,198565440,-1,-1,-1,-1,-1,-1,-1,219135840,-1,221933400,-1,-1,-1,-1,-1,123052800,-1,-1,-1,223432500,-1,-1,-1,-1,-1,-1,-1,-1,-1,220192500,-1,232427520,-1,-1,-1,-1,-1,-1,-1,211798920,-1,-1,-1,232193580,-1,144788220,-1,-1,-1,239738940,-1,36752100,-1,-1,-1,236658720,-1,-1,-1,235341600,-1,-1,-1,206088960,-1,-1,-1,241180740,-1,-1,-1,-1,-1,164029800,-1,-1,-1,-1,-1,245760000,-1,-1,-1,253015620,-1,-1,-1,-1,-1,-1,-1,250396860,-1,-1,-1,256510320,-1,153315180,-1,-1,-1,-1,-1,255091680,-1,-1,-1,-1,-1,246546300,-1,-1,-1,-1,-1,259844820,-1,-1,-1,267375360,-1,-1,-1,-1,-1,-1,-1,264656640,-1,-1,-1,204930240,-1,-1,-1,272213760,-1,110253720,-1,273430080,-1,-1,-1,57258240,-1,-1,-1,-1,-1,-1,-1,274457760,-1,-1,-1,-1,-1,281578140,-1,255000000,-1,263903640,-1,279447780,-1,-1,-1,-1,-1,234595140,-1,-1,-1,-1,-1,284497920,-1,-1,-1,-1,-1,-1,-1,82457760,-1,-1,-1,289608540,-1,297058020,-1,-1,-1,-1,-1,-1,-1,-1,-1,301665000,-1,-1,-1,-1,-1,114514620,-1,-1,-1,260071200,-1,306979200,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,305306880,-1,-1,-1,-1,-1,301507920,-1,306479880,-1,-1,-1,310663020,-1,-1,-1,304711680,-1,-1,-1,-1,-1,-1,-1,316081440,-1,231990000,-1,-1,-1,-1,-1,-1,-1,-1,-1,328860000,-1,-1,-1,-1,-1,330936840,-1,171759840,-1,-1,-1,333020160,-1,-1,-1,-1,-1,-1,-1,303709080,-1,-1,-1,332713980,-1,-1,-1,338607360,-1,279170580,-1,316953780,-1,-1,-1,338385120,-1,-1,-1,-1,-1,328090140,-1,-1,-1,326277840,-1,344120340,-1,257084100,-1,-1,-1,-1,-1,329609280,-1,-1,-1,353021760,-1,-1,-1,-1,-1,-1,-1,-1,-1,362854380,-1,355784460,-1,-1,-1,134215680,-1,313610220,-1,-1,-1,-1,-1,369609240,-1,-1,-1,-1,-1,303433260,-1,-1,-1,-1,-1,367709220,-1,-1,-1,339405000,-1,-1,-1,365775840,-1,-1,-1,381840480,-1,367965000,-1,-1,-1,372726900,-1,-1,-1,-1,-1,379897500,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,386091360,-1,-1,-1,330134220,-1,-1,-1,399114240,-1,-1,-1,392352180,-1,-1,-1,-1,-1,329062500,-1,-1,-1,-1,-1,398680320,-1,-1,-1,-1,-1,404422980,-1,-1,-1,-1,-1,405076140,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,411540000,-1,-1,-1,-1,-1,-1,-1,423405840,-1,-1,-1,418072260,-1,343067700,-1,426677160,-1,-1,-1,205951200,-1,-1,-1,424673280,-1,-1,-1,-1,-1,437712660,-1,-1,-1,-1,-1,431343420,-1,-1,-1,441904320,-1,402541920,-1,-1,-1,-1,-1,438083040,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,453960000,-1,-1,-1,-1,-1,452895300,-1,-1,-1,172005900,-1,451772160,-1,-1,-1,399766080,-1,-1,-1,418973160,-1,-1,-1,458722380,-1,203925540,-1,335344320,-1,384570420,-1,-1,-1,-1,-1,465743520,-1,477835320,-1,478722720,-1,-1,-1,-1,-1,-1,-1,472835940,-1,-1,-1,308855040,-1,458044020,-1,-1,-1,-1,-1,480000000,-1,-1,-1,-1,-1,-1,-1,473786040,-1,-1,-1,487236060,-1,-1,-1,-1,-1,456034800,-1,266173380,-1,-1,-1,494544480,-1,-1,-1,-1,-1,414523980,-1,402155520,-1,-1,-1,511754880,-1,-1,-1,463041240,-1,313015560,-1,286644540,-1,-1,-1,521277120,-1,522217500,-1,-1,-1,-1,-1,-1,-1,-1,-1,524936940,-1,-1,-1,528823680,-1,-1,-1,-1,-1,531667500,-1,524508960,-1,-1,-1,-1,-1,-1,-1,511663680,-1,-1,-1,532184580,-1,-1,-1,-1,-1,445993860,-1,-1,-1,543118380,-1,539934720,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,547759740,-1,-1,-1,-1,-1,-1,-1,272596020,-1,-1,-1,568270080,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,563635860,-1,-1,-1,-1,-1,401156280,-1,-1,-1,566383020,-1,571687680,-1,-1,-1,254698080,-1,583297200,-1,571290720,-1,-1,-1,579815820,-1,-1,-1,534773760,-1,-1,-1,-1,-1,-1,-1,588020640,-1,-1,-1,-1,-1,604220760,-1,513757440,-1,-1,-1,609522420,-1,-1,-1,363413760,-1,-1,-1,-1,-1,616953540,-1,604661760,-1,-1,-1,-1,-1,-1,-1,595140000,-1,-1,-1,619856160,-1,-1,-1,-1,-1,595539360,-1,-1,-1,-1,-1,621613920,-1,604208220,-1,-1,-1,533786760,-1,600200640,-1,-1,-1,630207540,-1,-1,-1,515332440,-1,-1,-1,-1,-1,-1,-1,650430000,-1,-1,-1,-1,-1,618449580,-1,-1,-1,-1,-1,647631660,-1,-1,-1,-1,-1,-1,-1,668340960,-1,-1,-1,656462880,-1,671672040,-1,615027360,-1,549875820,-1,-1,-1,-1,-1,665374020,-1,-1,-1,613556520,-1,-1,-1,-1,-1,-1,-1,674365440,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,697920300,-1,-1,-1,610062960,-1,624003600,-1,-1,-1,-1,-1,692590560,-1,-1,-1,-1,-1,-1,-1,641441280,-1,-1,-1,701824980,-1,628806420,-1,721337760,-1,722505420,-1,-1,-1,-1,-1,711141120,-1,-1,-1,-1,-1,-1,-1,494125800,-1,-1,-1,720539340,-1,-1,-1,727890240,-1,674922780,-1,-1,-1,-1,-1,730020000,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,739583460,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,749230080,-1,-1,-1,634953060,-1,768271140,-1,-1,-1,-1,-1,758960220,-1,-1,-1,779520000,-1,-1,-1,-1,-1,-1,-1,784442880,-1,-1,-1,138687840,-1,-1,-1,789381120,-1,-1,-1,778672500,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,788655360,-1,-1,-1,-1,-1,776107860,-1,730138440,-1,634845960,-1,798723180,-1,-1,-1,-1,-1,794277900,-1,811793280,-1,-1,-1,827768760,-1,-1,-1,792131340,-1,104548860,-1,-1,-1,-1,-1,819115140,-1,839457780,-1,-1,-1,-1,-1,-1,-1,-1,-1,848652480,-1,-1,-1,-1,-1,277373460,-1,-1,-1,-1,-1,839851260,-1,-1,-1,-1,-1,812512260,-1,624590400,-1,-1,-1,850349280,-1,-1,-1,-1,-1,711884940,-1,761953920,-1,851121120,-1,860934420,-1,-1,-1,793594680,-1,-1,-1,813822300,-1,823903080,-1,871607040,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,902391840,-1,-1,-1,905103360,-1,-1,-1,-1,-1,-1,-1,893216160,-1,-1,-1,-1,-1,691639560,-1,826656960,-1,-1,-1,918721440,-1,-1,-1,625283400,-1,922826520,-1,-1,-1,-1,-1,915179520,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,926294940,-1,603232500,-1,946833360,-1,-1,-1,-1,-1,-1,-1,937500000};
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", ans[n-1]);
    }
    return 0;
}


