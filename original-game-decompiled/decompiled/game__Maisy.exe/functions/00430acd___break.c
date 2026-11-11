
/* ==== __break @ 00430acd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00430acd-00430acd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


