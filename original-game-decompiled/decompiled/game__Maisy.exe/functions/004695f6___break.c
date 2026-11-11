
/* ==== __break @ 004695f6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695f6-004695f6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


