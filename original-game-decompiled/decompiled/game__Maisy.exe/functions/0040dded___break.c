
/* ==== __break @ 0040dded ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040dded-0040dded
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


