
/* ==== __break @ 004107cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107cc-004107cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


