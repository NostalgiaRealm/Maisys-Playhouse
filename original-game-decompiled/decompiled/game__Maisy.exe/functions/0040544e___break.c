
/* ==== __break @ 0040544e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040544e-0040544e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


