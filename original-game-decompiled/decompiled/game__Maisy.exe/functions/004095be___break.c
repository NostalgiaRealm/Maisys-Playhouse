
/* ==== __break @ 004095be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095be-004095be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


