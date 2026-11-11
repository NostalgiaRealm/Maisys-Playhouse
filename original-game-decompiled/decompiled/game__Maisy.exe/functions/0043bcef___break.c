
/* ==== __break @ 0043bcef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bcef-0043bcef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


