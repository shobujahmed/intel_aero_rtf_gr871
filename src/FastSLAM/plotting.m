close all
clear all
run('/home/malte/catkin_ws/Data/t_593.m')

t = t593;
%%
figure
xlabel('x')
ylabel('y')
zlabel('z')
%xlim([-3,3]) 
%ylim([-3,3]) 
%zlim([-3,3]) 
grid
%%
for i = 1:length(t.Particles)
    hold on 
    scatter3(t.Particles(i).map.mean(1,:),...
             t.Particles(i).map.mean(2,:),...
             t.Particles(i).map.mean(3,:),'*');
end


%%
for i = 1:length(t.Particles)
    hold on 
    plot3(t.Particles(i).Path.Path(1,:),...
             t.Particles(i).Path.Path(2,:),...
             t.Particles(i).Path.Path(3,:),'b');
end
%%
hold on 
plot3(t.meanPath.Path(1,:),t.meanPath.Path(2,:),t.meanPath.Path(3,:),'r')