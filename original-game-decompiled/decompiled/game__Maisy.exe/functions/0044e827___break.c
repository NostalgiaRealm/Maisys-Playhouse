
/* ==== __break @ 0044e827 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e827-0044e827
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


