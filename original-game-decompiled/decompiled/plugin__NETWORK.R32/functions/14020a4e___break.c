
/* ==== __break @ 14020a4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4e-14020a4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


