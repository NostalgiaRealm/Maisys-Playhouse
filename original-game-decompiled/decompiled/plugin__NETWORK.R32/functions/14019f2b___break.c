
/* ==== __break @ 14019f2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2b-14019f2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


