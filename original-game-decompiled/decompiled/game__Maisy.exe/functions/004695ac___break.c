
/* ==== __break @ 004695ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ac-004695ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


