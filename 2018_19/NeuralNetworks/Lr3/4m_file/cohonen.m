InpDat=load('all.spk');
InitDat=load('all.ini');

net = newc(InitDat, 4);
net.trainParam.epochs = 150;
net = train(net,InpDat);
a = sim(net,InpDat);
ac = vec2ind(a);
iws = net.iw{1,1};
area(a, 'DisplayName', 'Result map');