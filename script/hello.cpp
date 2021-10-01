#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginJoaosWorld : public WorldPlugin
  {
  public:
    WorldPluginJoaosWorld() : WorldPlugin()
    {
      printf("Welcome to Joao’s World!\n");
    }

  public:
    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginJoaosWorld)
}