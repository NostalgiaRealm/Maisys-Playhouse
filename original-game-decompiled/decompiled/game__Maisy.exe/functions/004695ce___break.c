
/* ==== __break @ 004695ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ce-004695ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


