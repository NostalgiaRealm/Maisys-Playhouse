
/* ==== __break @ 0045a9ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a9ac-0045a9ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


