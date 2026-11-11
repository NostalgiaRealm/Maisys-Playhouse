
/* ==== __break @ 004794ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ae-004794ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


