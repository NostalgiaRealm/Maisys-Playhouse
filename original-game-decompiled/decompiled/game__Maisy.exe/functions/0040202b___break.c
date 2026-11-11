
/* ==== __break @ 0040202b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040202b-0040202b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


