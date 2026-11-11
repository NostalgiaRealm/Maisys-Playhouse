
/* ==== __break @ 00425bda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bda-00425bda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


