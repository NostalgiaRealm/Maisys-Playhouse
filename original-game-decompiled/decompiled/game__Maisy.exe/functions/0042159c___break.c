
/* ==== __break @ 0042159c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042159c-0042159c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


