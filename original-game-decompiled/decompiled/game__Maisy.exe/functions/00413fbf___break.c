
/* ==== __break @ 00413fbf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fbf-00413fbf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


