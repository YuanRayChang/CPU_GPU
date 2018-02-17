clear;

R = load('Results.txt');
% k=1;
% for i=1:1:20000
%     if mod(i,200)==136
%         b(k)=R(i,2);
%         c(k)=R(i,4);
%         k=k+1;
%     end;
% end;
% plot(b,c)
% 3D plot
% figure(1)
% subplot(3,1,1);
plot3(R(:,1), R(:,2), R(:,3),'.')

% subplot(3,1,2);
% plot3(R(:,1), R(:,2), R(:,4),'-')
% 
% subplot(3,1,3);
% plot3(R(:,1), R(:,2), R(:,5),'*')

% 2D plot
% figure(2)
% subplot(3,1,1);
% plot(R(:,1), R(:,3),'.')
% subplot(3,1,2);
% plot(R(:,1), R(:,4),'.')
% subplot(3,1,3);
% plot(R(:,1), R(:,5),'.')