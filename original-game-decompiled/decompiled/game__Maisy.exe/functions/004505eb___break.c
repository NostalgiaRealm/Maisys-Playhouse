
/* ==== __break @ 004505eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505eb-004505eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


