
/* ==== __break @ 0045bfcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bfcd-0045bfcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


