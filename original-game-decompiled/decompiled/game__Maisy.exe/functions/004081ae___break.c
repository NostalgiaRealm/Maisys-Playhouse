
/* ==== __break @ 004081ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081ae-004081ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


