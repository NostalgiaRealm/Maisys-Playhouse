
/* ==== __break @ 0042f9fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f9fe-0042f9fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


